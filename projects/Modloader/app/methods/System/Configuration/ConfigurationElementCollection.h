#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationElementCollection.h>
#include <Modloader/app/structs/ConfigurationElementCollectionType__Enum.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::ConfigurationElementCollection {
    IL2CPP_REGISTER_METHOD(0x031BBAB0, app::ConfigurationElementCollectionType__Enum, get_CollectionType, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBAE0, int32_t, get_Count, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBB10, app::String*, get_ElementName, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBB40, bool, get_IsSynchronized, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBB70, app::Object*, get_SyncRoot, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBBA0, bool, get_ThrowOnDuplicate, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBBD0, app::IEnumerator*, GetEnumerator, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBC00, bool, IsModified, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBC30, void, Reset, app::ConfigurationElementCollection* this_ptr, app::ConfigurationElement* parent_element)
    IL2CPP_REGISTER_METHOD(0x031BBC60, void, ResetModified, app::ConfigurationElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBC90, void, ICollection_CopyTo, app::ConfigurationElementCollection* this_ptr, app::Array* arr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x031BBCC0,
        void,
        Unmerge,
        app::ConfigurationElementCollection* this_ptr,
        app::ConfigurationElement* source_element,
        app::ConfigurationElement* parent_element,
        app::ConfigurationSaveMode__Enum save_mode
    )
} // namespace app::classes::System::Configuration::ConfigurationElementCollection
