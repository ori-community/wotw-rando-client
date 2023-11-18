#pragma once
#include <Modloader/app/structs/CursorInputData.h>
#include <Modloader/app/structs/CursorInputData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorInputData {
        inline app::CursorInputData__Class** type_info() {
            static app::CursorInputData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CursorInputData__Class**)(modloader::win::memory::resolve_rva(0x04730F08));
            }
            return cache;
        }
        inline app::CursorInputData__Class* get_class() {
            return il2cpp::get_class<app::CursorInputData__Class>(type_info(), "", "CursorInputData");
        }
        inline app::CursorInputData* create() {
            return il2cpp::create_object<app::CursorInputData>(get_class());
        }
    } // namespace CursorInputData
} // namespace app::classes::types
