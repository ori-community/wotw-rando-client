#pragma once
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair.h>
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair__Array.h>
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_ShelledUnshelledAnimPair {
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class** type_info() {
            static app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class>(type_info(), "", "SpikeSlugEntity", "ShelledUnshelledAnimPair");
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_ShelledUnshelledAnimPair>(get_class());
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array* create_array(int size) {
            return il2cpp::array_new<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array>(get_class(), size);
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array* create_array(const std::vector<app::SpikeSlugEntity_ShelledUnshelledAnimPair*>& items) {
            return il2cpp::array_new<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array>(get_class(), items);
        }
    } // namespace SpikeSlugEntity_ShelledUnshelledAnimPair
} // namespace app::classes::types
