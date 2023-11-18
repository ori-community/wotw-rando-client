#pragma once
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair__Array.h>
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_ShelledUnshelledAnimPair__Array {
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class** type_info() {
            static app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class>(type_info(), "", "SpikeSlugEntity+ShelledUnshelledAnimPair[]");
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array>(get_class());
        }
    } // namespace SpikeSlugEntity_ShelledUnshelledAnimPair__Array
} // namespace app::classes::types
