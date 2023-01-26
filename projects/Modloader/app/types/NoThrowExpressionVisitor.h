#pragma once
#include <Modloader/app/structs/NoThrowExpressionVisitor.h>
#include <Modloader/app/structs/NoThrowExpressionVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoThrowExpressionVisitor {
        inline app::NoThrowExpressionVisitor__Class** type_info() {
            static app::NoThrowExpressionVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NoThrowExpressionVisitor__Class**)(modloader::win::memory::resolve_rva(0x04704820));
            }
            return cache;
        }
        inline app::NoThrowExpressionVisitor__Class* get_class() {
            return il2cpp::get_class<app::NoThrowExpressionVisitor__Class>(type_info(), "Newtonsoft.Json.Utilities", "NoThrowExpressionVisitor");
        }
        inline app::NoThrowExpressionVisitor* create() {
            return il2cpp::create_object<app::NoThrowExpressionVisitor>(get_class());
        }
    } // namespace NoThrowExpressionVisitor
} // namespace app::classes::types
