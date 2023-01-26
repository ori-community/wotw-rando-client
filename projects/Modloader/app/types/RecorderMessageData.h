#pragma once
#include <Modloader/app/structs/RecorderMessageData.h>
#include <Modloader/app/structs/RecorderMessageData__Array.h>
#include <Modloader/app/structs/RecorderMessageData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageData {
        inline app::RecorderMessageData__Class** type_info() {
            static app::RecorderMessageData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderMessageData__Class**)(modloader::win::memory::resolve_rva(0x0472D2A8));
            }
            return cache;
        }
        inline app::RecorderMessageData__Class* get_class() {
            return il2cpp::get_class<app::RecorderMessageData__Class>(type_info(), "", "RecorderMessageData");
        }
        inline app::RecorderMessageData* create() {
            return il2cpp::create_object<app::RecorderMessageData>(get_class());
        }
        inline app::RecorderMessageData__Array* create_array(int size) {
            return il2cpp::array_new<app::RecorderMessageData__Array>(get_class(), size);
        }
        inline app::RecorderMessageData__Array* create_array(const std::vector<app::RecorderMessageData*>& items) {
            return il2cpp::array_new<app::RecorderMessageData__Array>(get_class(), items);
        }
    } // namespace RecorderMessageData
} // namespace app::classes::types
