#pragma once
#include <Modloader/app/structs/RegexFC.h>
#include <Modloader/app/structs/RegexFC__Array.h>
#include <Modloader/app/structs/RegexFC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexFC {
        inline app::RegexFC__Class** type_info() {
            static app::RegexFC__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexFC__Class**)(modloader::win::memory::resolve_rva(0x047432B8));
            }
            return cache;
        }
        inline app::RegexFC__Class* get_class() {
            return il2cpp::get_class<app::RegexFC__Class>(type_info(), "System.Text.RegularExpressions", "RegexFC");
        }
        inline app::RegexFC* create() {
            return il2cpp::create_object<app::RegexFC>(get_class());
        }
        inline app::RegexFC__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexFC__Array>(get_class(), size);
        }
        inline app::RegexFC__Array* create_array(const std::vector<app::RegexFC*>& items) {
            return il2cpp::array_new<app::RegexFC__Array>(get_class(), items);
        }
    } // namespace RegexFC
} // namespace app::classes::types
