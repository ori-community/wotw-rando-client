#pragma once
#include <Modloader/app/structs/GoThroughPlatform.h>
#include <Modloader/app/structs/GoThroughPlatform__Array.h>
#include <Modloader/app/structs/GoThroughPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoThroughPlatform {
        inline app::GoThroughPlatform__Class** type_info() {
            static app::GoThroughPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GoThroughPlatform__Class**)(modloader::win::memory::resolve_rva(0x047985A8));
            }
            return cache;
        }
        inline app::GoThroughPlatform__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatform__Class>(type_info(), "", "GoThroughPlatform");
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
