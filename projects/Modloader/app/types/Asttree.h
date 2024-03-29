#pragma once
#include <Modloader/app/structs/Asttree.h>
#include <Modloader/app/structs/Asttree__Array.h>
#include <Modloader/app/structs/Asttree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Asttree {
        inline app::Asttree__Class** type_info() {
            static app::Asttree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Asttree__Class**)(modloader::win::memory::resolve_rva(0x04743A78));
            }
            return cache;
        }
        inline app::Asttree__Class* get_class() {
            return il2cpp::get_class<app::Asttree__Class>(type_info(), "System.Xml.Schema", "Asttree");
        }
        inline app::Asttree* create() {
            return il2cpp::create_object<app::Asttree>(get_class());
        }
        inline app::Asttree__Array* create_array(int size) {
            return il2cpp::array_new<app::Asttree__Array>(get_class(), size);
        }
        inline app::Asttree__Array* create_array(const std::vector<app::Asttree*>& items) {
            return il2cpp::array_new<app::Asttree__Array>(get_class(), items);
        }
    } // namespace Asttree
} // namespace app::classes::types
