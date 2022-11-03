#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StreamingSoundsDisplay {
        namespace {
            inline app::StreamingSoundsDisplay__Class* type_info_ref = nullptr;
        }
        inline app::StreamingSoundsDisplay__Class** type_info = &type_info_ref;
        inline app::StreamingSoundsDisplay__Class* get_class() {
            return il2cpp::get_class<app::StreamingSoundsDisplay__Class>(type_info, "", "StreamingSoundsDisplay");
        }
        inline app::StreamingSoundsDisplay* create() {
            return il2cpp::create_object<app::StreamingSoundsDisplay>(get_class());
        }
    } // namespace StreamingSoundsDisplay
} // namespace app::classes::types
