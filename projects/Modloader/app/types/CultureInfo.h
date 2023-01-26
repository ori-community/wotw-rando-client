#pragma once
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/CultureInfo__Array.h>
#include <Modloader/app/structs/CultureInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureInfo {
        inline app::CultureInfo__Class** type_info() {
            static app::CultureInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CultureInfo__Class**)(modloader::win::memory::resolve_rva(0x04797050));
            }
            return cache;
        }
        inline app::CultureInfo__Class* get_class() {
            return il2cpp::get_class<app::CultureInfo__Class>(type_info(), "System.Globalization", "CultureInfo");
        }
        inline app::CultureInfo* create() {
            return il2cpp::create_object<app::CultureInfo>(get_class());
        }
        inline app::CultureInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::CultureInfo__Array>(get_class(), size);
        }
        inline app::CultureInfo__Array* create_array(const std::vector<app::CultureInfo*>& items) {
            return il2cpp::array_new<app::CultureInfo__Array>(get_class(), items);
        }
    } // namespace CultureInfo
} // namespace app::classes::types
