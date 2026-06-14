#pragma once
#include <Modloader/app/structs/MaterialVFXSet.h>
#include <Modloader/app/structs/MaterialVFXSet__Array.h>
#include <Modloader/app/structs/MaterialVFXSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXSet {
        inline app::MaterialVFXSet__Class** type_info() {
            static app::MaterialVFXSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialVFXSet__Class**)(modloader::win::memory::resolve_rva(0x047309D0));
            }
            return cache;
        }
        inline app::MaterialVFXSet__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSet__Class>(type_info(), "", "MaterialVFXSet");
        }
        inline app::MaterialVFXSet* create() {
            return il2cpp::create_object<app::MaterialVFXSet>(get_class());
        }
        inline app::MaterialVFXSet__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialVFXSet__Array>(get_class(), size);
        }
        inline app::MaterialVFXSet__Array* create_array(const std::vector<app::MaterialVFXSet*>& items) {
            return il2cpp::array_new<app::MaterialVFXSet__Array>(get_class(), items);
        }
    } // namespace MaterialVFXSet
} // namespace app::classes::types
