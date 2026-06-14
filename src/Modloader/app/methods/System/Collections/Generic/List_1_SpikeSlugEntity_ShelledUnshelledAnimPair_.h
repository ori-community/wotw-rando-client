#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SpikeSlugEntity_ShelledUnshelledAnimPair_.h>
#include <Modloader/app/structs/Predicate_1_SpikeSlugEntity_ShelledUnshelledAnimPair_.h>
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair.h>

namespace app::classes::System::Collections::Generic::List_1_SpikeSlugEntity_ShelledUnshelledAnimPair_ {
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::SpikeSlugEntity_ShelledUnshelledAnimPair*,
        Find,
        app::List_1_SpikeSlugEntity_ShelledUnshelledAnimPair_* this_ptr,
        app::Predicate_1_SpikeSlugEntity_ShelledUnshelledAnimPair_* match
    )
}
