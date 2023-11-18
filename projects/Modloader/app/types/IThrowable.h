#pragma once
#include <Modloader/app/structs/IThrowable.h>
#include <Modloader/app/structs/IThrowable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IThrowable {
        inline app::IThrowable__Class** type_info() {
            static app::IThrowable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IThrowable__Class**)(modloader::win::memory::resolve_rva(0x047485B8));
            }
            return cache;
        }
        inline app::IThrowable__Class* get_class() {
            return il2cpp::get_class<app::IThrowable__Class>(type_info(), "Moon", "IThrowable");
        }
    } // namespace IThrowable
} // namespace app::classes::types
