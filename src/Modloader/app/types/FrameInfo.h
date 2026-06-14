#pragma once
#include <Modloader/app/structs/FrameInfo.h>
#include <Modloader/app/structs/FrameInfo__Array.h>
#include <Modloader/app/structs/FrameInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameInfo {
        inline app::FrameInfo__Class** type_info() {
            static app::FrameInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameInfo__Class**)(modloader::win::memory::resolve_rva(0x047018B8));
            }
            return cache;
        }
        inline app::FrameInfo__Class* get_class() {
            return il2cpp::get_class<app::FrameInfo__Class>(type_info(), "", "FrameInfo");
        }
        inline app::FrameInfo* create() {
            return il2cpp::create_object<app::FrameInfo>(get_class());
        }
        inline app::FrameInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameInfo__Array>(get_class(), size);
        }
        inline app::FrameInfo__Array* create_array(const std::vector<app::FrameInfo*>& items) {
            return il2cpp::array_new<app::FrameInfo__Array>(get_class(), items);
        }
    } // namespace FrameInfo
} // namespace app::classes::types
