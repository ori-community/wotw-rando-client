#pragma once
#include <Modloader/app/structs/CaptureEnumerator.h>
#include <Modloader/app/structs/CaptureEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaptureEnumerator {
        inline app::CaptureEnumerator__Class** type_info() {
            static app::CaptureEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CaptureEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04741060));
            }
            return cache;
        }
        inline app::CaptureEnumerator__Class* get_class() {
            return il2cpp::get_class<app::CaptureEnumerator__Class>(type_info(), "System.Text.RegularExpressions", "CaptureEnumerator");
        }
        inline app::CaptureEnumerator* create() {
            return il2cpp::create_object<app::CaptureEnumerator>(get_class());
        }
    } // namespace CaptureEnumerator
} // namespace app::classes::types
