#pragma once
#include <Modloader/app/structs/WwiseHooksProcessing.h>
#include <Modloader/app/structs/WwiseHooksProcessing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing {
        inline app::WwiseHooksProcessing__Class** type_info() {
            static app::WwiseHooksProcessing__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseHooksProcessing__Class**)(modloader::win::memory::resolve_rva(0x0478AB18));
            }
            return cache;
        }
        inline app::WwiseHooksProcessing__Class* get_class() {
            return il2cpp::get_class<app::WwiseHooksProcessing__Class>(type_info(), "", "WwiseHooksProcessing");
        }
        inline app::WwiseHooksProcessing* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing>(get_class());
        }
    } // namespace WwiseHooksProcessing
} // namespace app::classes::types
