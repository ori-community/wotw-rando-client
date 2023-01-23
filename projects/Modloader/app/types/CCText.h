#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCText__Class.h>
#include <Modloader/app/structs/CCText.h>
#include <Modloader/app/structs/CCText__Array.h>

namespace app::classes::types {
    namespace CCText {
        inline app::CCText__Class** type_info = (app::CCText__Class**)(modloader::win::memory::resolve_rva(0x04787F38));
        inline app::CCText__Class* get_class() {
            return il2cpp::get_class<app::CCText__Class>(type_info, "", "CCText");
        }
        inline app::CCText* create() {
            return il2cpp::create_object<app::CCText>(get_class());
        }
        inline app::CCText__Array* create_array(int size) {
            return il2cpp::array_new<app::CCText__Array>(get_class(), size);
        }
        inline app::CCText__Array* create_array(const std::vector<app::CCText*>& items) {
            return il2cpp::array_new<app::CCText__Array>(get_class(), items);
        }
    } // namespace CCText
} // namespace app::classes::types
