#pragma once
#include <Modloader/app/structs/VerletStructure.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#include <Modloader/app/structs/VerletStructure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure {
        inline app::VerletStructure__Class** type_info() {
            static app::VerletStructure__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletStructure__Class**)(modloader::win::memory::resolve_rva(0x04760CC8));
            }
            return cache;
        }
        inline app::VerletStructure__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure__Class>(type_info(), "", "VerletStructure");
        }
        inline app::VerletStructure* create() {
            return il2cpp::create_object<app::VerletStructure>(get_class());
        }
        inline app::VerletStructure__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure__Array>(get_class(), size);
        }
        inline app::VerletStructure__Array* create_array(const std::vector<app::VerletStructure*>& items) {
            return il2cpp::array_new<app::VerletStructure__Array>(get_class(), items);
        }
    } // namespace VerletStructure
} // namespace app::classes::types
