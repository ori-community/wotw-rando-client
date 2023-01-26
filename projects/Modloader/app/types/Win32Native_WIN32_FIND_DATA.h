#pragma once
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32Native_WIN32_FIND_DATA {
        inline app::Win32Native_WIN32_FIND_DATA__Class** type_info() {
            static app::Win32Native_WIN32_FIND_DATA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Win32Native_WIN32_FIND_DATA__Class**)(modloader::win::memory::resolve_rva(0x04791798));
            }
            return cache;
        }
        inline app::Win32Native_WIN32_FIND_DATA__Class* get_class() {
            return il2cpp::get_nested_class<app::Win32Native_WIN32_FIND_DATA__Class>(type_info(), "Microsoft.Win32", "Win32Native", "WIN32_FIND_DATA");
        }
        inline app::Win32Native_WIN32_FIND_DATA* create() {
            return il2cpp::create_object<app::Win32Native_WIN32_FIND_DATA>(get_class());
        }
    } // namespace Win32Native_WIN32_FIND_DATA
} // namespace app::classes::types
