#pragma once
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie__Array.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie {
        inline app::AVProWindowsMediaMovie__Class** type_info() {
            static app::AVProWindowsMediaMovie__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaMovie__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaMovie__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovie__Class>(type_info(), "", "AVProWindowsMediaMovie");
        }
        inline app::AVProWindowsMediaMovie* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovie>(get_class());
        }
        inline app::AVProWindowsMediaMovie__Array* create_array(int size) {
            return il2cpp::array_new<app::AVProWindowsMediaMovie__Array>(get_class(), size);
        }
        inline app::AVProWindowsMediaMovie__Array* create_array(const std::vector<app::AVProWindowsMediaMovie*>& items) {
            return il2cpp::array_new<app::AVProWindowsMediaMovie__Array>(get_class(), items);
        }
    } // namespace AVProWindowsMediaMovie
} // namespace app::classes::types
