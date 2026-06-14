#pragma once
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Module__Array.h>
#include <Modloader/app/structs/Module__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Module {
        inline app::Module__Class** type_info() {
            static app::Module__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Module__Class**)(modloader::win::memory::resolve_rva(0x0477C678));
            }
            return cache;
        }
        inline app::Module__Class* get_class() {
            return il2cpp::get_class<app::Module__Class>(type_info(), "System.Reflection", "Module");
        }
        inline app::Module* create() {
            return il2cpp::create_object<app::Module>(get_class());
        }
        inline app::Module__Array* create_array(int size) {
            return il2cpp::array_new<app::Module__Array>(get_class(), size);
        }
        inline app::Module__Array* create_array(const std::vector<app::Module*>& items) {
            return il2cpp::array_new<app::Module__Array>(get_class(), items);
        }
    } // namespace Module
} // namespace app::classes::types
