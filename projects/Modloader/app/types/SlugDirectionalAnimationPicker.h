#pragma once
#include <Modloader/app/structs/SlugDirectionalAnimationPicker.h>
#include <Modloader/app/structs/SlugDirectionalAnimationPicker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugDirectionalAnimationPicker {
        inline app::SlugDirectionalAnimationPicker__Class** type_info() {
            static app::SlugDirectionalAnimationPicker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SlugDirectionalAnimationPicker__Class**)(modloader::win::memory::resolve_rva(0x0473B670));
            }
            return cache;
        }
        inline app::SlugDirectionalAnimationPicker__Class* get_class() {
            return il2cpp::get_class<app::SlugDirectionalAnimationPicker__Class>(type_info(), "", "SlugDirectionalAnimationPicker");
        }
        inline app::SlugDirectionalAnimationPicker* create() {
            return il2cpp::create_object<app::SlugDirectionalAnimationPicker>(get_class());
        }
    } // namespace SlugDirectionalAnimationPicker
} // namespace app::classes::types
