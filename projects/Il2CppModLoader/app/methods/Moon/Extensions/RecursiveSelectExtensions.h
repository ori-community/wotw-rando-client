#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Extensions::RecursiveSelectExtensions {
    IL2CPP_REGISTER_METHOD(0x00E7D2A0, app::IEnumerable_1_System_Object_ *, RecursiveSelect_1, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_ * child_selector))
    IL2CPP_REGISTER_METHOD(0x00E77800, app::IEnumerable_1_System_Object_ *, RecursiveSelect_2, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_ * child_selector, app::Func_2_Object_Object_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E77800, app::IEnumerable_1_System_Object_ *, RecursiveSelect_3, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_ * child_selector, app::Func_3_Object_Int32_Object_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E77A20, app::IEnumerable_1_System_Object_ *, RecursiveSelect_4, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_ * child_selector, app::Func_4_Object_Int32_Int32_Object_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E77A40, app::IEnumerable_1_System_Object_ *, RecursiveSelect_5, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_ * child_selector, app::Func_4_Object_Int32_Int32_Object_ * selector, int32_t depth))
}
