#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GoThroughPlatform__Class.h>
#include <Modloader/app/structs/GoThroughPlatform.h>
#include <Modloader/app/structs/GoThroughPlatform__Array.h>

namespace app::classes::types {
    namespace GoThroughPlatform {
        inline app::GoThroughPlatform__Class** type_info = (app::GoThroughPlatform__Class**)(modloader::win::memory::resolve_rva(0x047985A8));
        inline app::GoThroughPlatform__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatform__Class>(type_info, "", "GoThroughPlatform");
        }
        inline app::GoThroughPlatform* create() {
            return il2cpp::create_object<app::GoThroughPlatform>(get_class());
        }
        inline app::GoThroughPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::GoThroughPlatform__Array>(get_class(), size);
        }
        inline app::GoThroughPlatform__Array* create_array(const std::vector<app::GoThroughPlatform*>& items) {
            return il2cpp::array_new<app::GoThroughPlatform__Array>(get_class(), items);
        }
    } // namespace GoThroughPlatform
} // namespace app::classes::types
