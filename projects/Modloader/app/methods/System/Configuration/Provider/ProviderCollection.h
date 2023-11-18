#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProviderCollection.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ProviderBase.h>

namespace app::classes::System::Configuration::Provider::ProviderCollection {
    IL2CPP_REGISTER_METHOD(0x031BC020, int32_t, get_Count, (app::ProviderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BC050, bool, get_IsSynchronized, (app::ProviderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BC080, app::Object*, get_SyncRoot, (app::ProviderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BC0B0, void, Add, (app::ProviderCollection * this_ptr, app::ProviderBase* provider))
    IL2CPP_REGISTER_METHOD(0x031BC0E0, app::IEnumerator*, GetEnumerator, (app::ProviderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BC110, void, ICollection_CopyTo, (app::ProviderCollection * this_ptr, app::Array* array, int32_t index))
} // namespace app::classes::System::Configuration::Provider::ProviderCollection
