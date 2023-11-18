#pragma once
#include <Modloader/app/structs/FrameCounter_SecondInfo.h>
#include <Modloader/app/structs/FrameCounter_SecondInfo__Array.h>
#include <Modloader/app/structs/FrameCounter_SecondInfo__Boxed.h>
#include <Modloader/app/structs/FrameCounter_SecondInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCounter_SecondInfo {
        inline app::FrameCounter_SecondInfo__Class** type_info() {
            static app::FrameCounter_SecondInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameCounter_SecondInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameCounter_SecondInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCounter_SecondInfo__Class>(type_info(), "Moon", "FrameCounter", "SecondInfo");
        }
        inline app::FrameCounter_SecondInfo* create() {
            return il2cpp::create_object<app::FrameCounter_SecondInfo>(get_class());
        }
        inline app::FrameCounter_SecondInfo__Boxed* box(app::FrameCounter_SecondInfo value) {
            return il2cpp::box_value<app::FrameCounter_SecondInfo__Boxed>(get_class(), value);
        }
        inline app::FrameCounter_SecondInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameCounter_SecondInfo__Array>(get_class(), size);
        }
        inline app::FrameCounter_SecondInfo__Array* create_array(const std::vector<app::FrameCounter_SecondInfo>& items) {
            return il2cpp::array_new<app::FrameCounter_SecondInfo__Array>(get_class(), items);
        }
    } // namespace FrameCounter_SecondInfo
} // namespace app::classes::types
