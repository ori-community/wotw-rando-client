#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::AttributeCollection {
    IL2CPP_REGISTER_METHOD(0x024A0EB0, void, ctor_1, (app::AttributeCollection * this_ptr, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHODINFO(0x04718B50, AttributeCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A0FC0, app::AttributeCollection *, FromExisting, (app::AttributeCollection * existing, app::Attribute__Array * new_attributes))
    IL2CPP_REGISTER_METHODINFO(0x0474A588, AttributeCollection_FromExisting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Attribute__Array *, get_Attributes, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A1490, int32_t, get_Count, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A14C0, app::Attribute *, get_Item_1, (app::AttributeCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x024A1510, app::Attribute *, get_Item_2, (app::AttributeCollection * this_ptr, app::Type * attribute_type))
    IL2CPP_REGISTER_METHOD(0x024A1B10, bool, Contains_1, (app::AttributeCollection * this_ptr, app::Attribute * attribute))
    IL2CPP_REGISTER_METHOD(0x024A1B90, bool, Contains_2, (app::AttributeCollection * this_ptr, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x024A1C10, app::Attribute *, GetDefaultAttribute, (app::AttributeCollection * this_ptr, app::Type * attribute_type))
    IL2CPP_REGISTER_METHOD(0x024A21E0, app::IEnumerator *, GetEnumerator, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A2210, bool, Matches_1, (app::AttributeCollection * this_ptr, app::Attribute * attribute))
    IL2CPP_REGISTER_METHOD(0x024A22F0, bool, Matches_2, (app::AttributeCollection * this_ptr, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x024A1490, int32_t, ICollection_get_Count, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object *, ICollection_get_SyncRoot, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A2410, void, CopyTo, (app::AttributeCollection * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x024A21E0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::AttributeCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A24A0, void, cctor, ())
}
