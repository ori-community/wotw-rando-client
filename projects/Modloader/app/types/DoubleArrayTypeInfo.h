#pragma once
#include <Modloader/app/structs/DoubleArrayTypeInfo.h>
#include <Modloader/app/structs/DoubleArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleArrayTypeInfo {
        inline app::DoubleArrayTypeInfo__Class** type_info() {
            static app::DoubleArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DoubleArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0471B968));
            }
            return cache;
        }
        inline app::DoubleArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DoubleArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "DoubleArrayTypeInfo");
        }
        inline app::DoubleArrayTypeInfo* create() {
            return il2cpp::create_object<app::DoubleArrayTypeInfo>(get_class());
        }
    } // namespace DoubleArrayTypeInfo
} // namespace app::classes::types
