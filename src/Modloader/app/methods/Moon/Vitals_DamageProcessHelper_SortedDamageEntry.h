#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageReceiver_DamageEntry.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Boxed.h>

namespace app::classes::Moon::Vitals_DamageProcessHelper_SortedDamageEntry {
    IL2CPP_REGISTER_METHOD(
        0x00124B90,
        void,
        ctor,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Boxed* this_ptr,
        app::DamageReceiver_DamageEntry* _damage_entry,
        app::DamageReceiver* _receiver
    )
}
