#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Configuration::ConfigurationPropertyCollection {
    IL2CPP_REGISTER_METHOD(0x031BBCF0, int32_t, get_Count, app::ConfigurationPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBD20, bool, get_IsSynchronized, app::ConfigurationPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBD50, app::Object*, get_SyncRoot, app::ConfigurationPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBD80, app::IEnumerator*, GetEnumerator, app::ConfigurationPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBDB0, void, ICollection_CopyTo, app::ConfigurationPropertyCollection* this_ptr, app::Array* array, int32_t index)
} // namespace app::classes::System::Configuration::ConfigurationPropertyCollection
