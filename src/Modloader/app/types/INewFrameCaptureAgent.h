#pragma once
#include <Modloader/app/structs/INewFrameCaptureAgent.h>
#include <Modloader/app/structs/INewFrameCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INewFrameCaptureAgent {
        inline app::INewFrameCaptureAgent__Class** type_info() {
            static app::INewFrameCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INewFrameCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0474F838));
            }
            return cache;
        }
        inline app::INewFrameCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::INewFrameCaptureAgent__Class>(type_info(), "", "INewFrameCaptureAgent");
        }
    } // namespace INewFrameCaptureAgent
} // namespace app::classes::types
