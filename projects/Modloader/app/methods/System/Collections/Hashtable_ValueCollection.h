#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Hashtable_ValueCollection.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Hashtable_ValueCollection {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::Hashtable_ValueCollection * this_ptr, app::Hashtable* hashtable))
    IL2CPP_REGISTER_METHOD(0x02028AE0, void, CopyTo, (app::Hashtable_ValueCollection * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02028CC0, app::IEnumerator*, GetEnumerator, (app::Hashtable_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017174B0, bool, get_IsSynchronized, (app::Hashtable_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBED0, app::Object*, get_SyncRoot, (app::Hashtable_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Count, (app::Hashtable_ValueCollection * this_ptr))
} // namespace app::classes::System::Collections::Hashtable_ValueCollection
