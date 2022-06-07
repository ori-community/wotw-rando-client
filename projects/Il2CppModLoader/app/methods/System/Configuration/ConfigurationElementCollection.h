#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::ConfigurationElementCollection {
    IL2CPP_REGISTER_METHOD(0x031BBAB0, app::ConfigurationElementCollectionType__Enum, get_CollectionType, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AE60, ConfigurationElementCollection_get_CollectionType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBAE0, int32_t, get_Count, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794878, ConfigurationElementCollection_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBB10, app::String *, get_ElementName, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775320, ConfigurationElementCollection_get_ElementName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBB40, bool, get_IsSynchronized, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756EA0, ConfigurationElementCollection_get_IsSynchronized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBB70, app::Object *, get_SyncRoot, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724220, ConfigurationElementCollection_get_SyncRoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBBA0, bool, get_ThrowOnDuplicate, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A3B0, ConfigurationElementCollection_get_ThrowOnDuplicate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBBD0, app::IEnumerator *, GetEnumerator, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CE60, ConfigurationElementCollection_GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBC00, bool, IsModified, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AE00, ConfigurationElementCollection_IsModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBC30, void, Reset, (app::ConfigurationElementCollection * this_ptr, app::ConfigurationElement * parent_element))
    IL2CPP_REGISTER_METHODINFO(0x047303F8, ConfigurationElementCollection_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBC60, void, ResetModified, (app::ConfigurationElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789D60, ConfigurationElementCollection_ResetModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBC90, void, ICollection_CopyTo, (app::ConfigurationElementCollection * this_ptr, app::Array * arr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04770B90, ConfigurationElementCollection_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBCC0, void, Unmerge, (app::ConfigurationElementCollection * this_ptr, app::ConfigurationElement * source_element, app::ConfigurationElement * parent_element, app::ConfigurationSaveMode__Enum save_mode))
    IL2CPP_REGISTER_METHODINFO(0x0474E460, ConfigurationElementCollection_Unmerge__MethodInfo)
}
