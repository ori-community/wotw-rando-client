#pragma once
#include <Modloader/app/structs/IFrameData.h>
#include <Modloader/app/structs/IFrameData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFrameData {
        inline app::IFrameData__Class** type_info() {
            static app::IFrameData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFrameData__Class**)(modloader::win::memory::resolve_rva(0x04774608));
            }
            return cache;
        }
        inline app::IFrameData__Class* get_class() {
            return il2cpp::get_class<app::IFrameData__Class>(type_info(), "", "IFrameData");
        }
    } // namespace IFrameData
} // namespace app::classes::types
