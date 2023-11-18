#pragma once
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/Regex__Array.h>
#include <Modloader/app/structs/Regex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Regex {
        inline app::Regex__Class** type_info() {
            static app::Regex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Regex__Class**)(modloader::win::memory::resolve_rva(0x04768EE0));
            }
            return cache;
        }
        inline app::Regex__Class* get_class() {
            return il2cpp::get_class<app::Regex__Class>(type_info(), "System.Text.RegularExpressions", "Regex");
        }
        inline app::Regex* create() {
            return il2cpp::create_object<app::Regex>(get_class());
        }
        inline app::Regex__Array* create_array(int size) {
            return il2cpp::array_new<app::Regex__Array>(get_class(), size);
        }
        inline app::Regex__Array* create_array(const std::vector<app::Regex*>& items) {
            return il2cpp::array_new<app::Regex__Array>(get_class(), items);
        }
    } // namespace Regex
} // namespace app::classes::types
