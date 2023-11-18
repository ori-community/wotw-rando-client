#pragma once
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Encoding__Array.h>
#include <Modloader/app/structs/Encoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Encoding {
        inline app::Encoding__Class** type_info() {
            static app::Encoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Encoding__Class**)(modloader::win::memory::resolve_rva(0x047831A8));
            }
            return cache;
        }
        inline app::Encoding__Class* get_class() {
            return il2cpp::get_class<app::Encoding__Class>(type_info(), "System.Text", "Encoding");
        }
        inline app::Encoding* create() {
            return il2cpp::create_object<app::Encoding>(get_class());
        }
        inline app::Encoding__Array* create_array(int size) {
            return il2cpp::array_new<app::Encoding__Array>(get_class(), size);
        }
        inline app::Encoding__Array* create_array(const std::vector<app::Encoding*>& items) {
            return il2cpp::array_new<app::Encoding__Array>(get_class(), items);
        }
    } // namespace Encoding
} // namespace app::classes::types
