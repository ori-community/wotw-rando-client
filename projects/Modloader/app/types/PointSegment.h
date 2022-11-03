#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointSegment {
        namespace {
            inline app::PointSegment__Class* type_info_ref = nullptr;
        }
        inline app::PointSegment__Class** type_info = &type_info_ref;
        inline app::PointSegment__Class* get_class() {
            return il2cpp::get_class<app::PointSegment__Class>(type_info, "", "PointSegment");
        }
        inline app::PointSegment* create() {
            return il2cpp::create_object<app::PointSegment>(get_class());
        }
    } // namespace PointSegment
} // namespace app::classes::types
