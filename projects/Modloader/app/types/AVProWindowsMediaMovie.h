#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie__Array.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie {
        namespace {
            inline app::AVProWindowsMediaMovie__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaMovie__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMovie__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovie__Class>(type_info, "", "AVProWindowsMediaMovie");
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
