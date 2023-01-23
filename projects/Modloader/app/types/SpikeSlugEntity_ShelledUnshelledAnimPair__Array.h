#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class.h>
#include <Modloader/app/structs/SpikeSlugEntity_ShelledUnshelledAnimPair__Array.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_ShelledUnshelledAnimPair__Array {
        namespace {
            inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class** type_info = &type_info_ref;
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array__Class>(type_info, "", "SpikeSlugEntity+ShelledUnshelledAnimPair[]");
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array>(get_class());
        }
    } // namespace SpikeSlugEntity_ShelledUnshelledAnimPair__Array
} // namespace app::classes::types
