#ifdef LOCAL_TEST
#include "macros.hpp"

DECLARE_CLASS(Custom, Tester, "System", "Object", sizeof(Il2CppObject),
    DECLARE_STATIC_FIELD(int, x);
    DECLARE_INSTANCE_FIELD_DEFAULT(float, z, 3.0f);
    DECLARE_INSTANCE_METHOD(bool, test, int arg1, int arg2);
    // bool test(int arg1, int arg2);
)
DEFINE_TYPE(Custom, Tester);

bool Custom::Tester::test([[maybe_unused]] int arg1, [[maybe_unused]] int arg2) {
    return false;
}

DECLARE_CLASS_CUSTOM(Custom, Test2, Custom::Tester,
    DECLARE_INSTANCE_FIELD(int, y);
)
DEFINE_TYPE(Custom, Test2);

void testStuff() {
    custom_types::Register::AutoRegister();
}
#endif