#pragma once
#include <Modloader/app/structs/FrameCaptureTester.h>
#include <Modloader/app/structs/FrameCaptureTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCaptureTester {
        inline app::FrameCaptureTester__Class** type_info() {
            static app::FrameCaptureTester__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameCaptureTester__Class**)(modloader::win::memory::resolve_rva(0x047972E0));
            }
            return cache;
        }
        inline app::FrameCaptureTester__Class* get_class() {
            return il2cpp::get_class<app::FrameCaptureTester__Class>(type_info(), "", "FrameCaptureTester");
        }
        inline app::FrameCaptureTester* create() {
            return il2cpp::create_object<app::FrameCaptureTester>(get_class());
        }
    } // namespace FrameCaptureTester
} // namespace app::classes::types
