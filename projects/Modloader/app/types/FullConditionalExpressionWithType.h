#pragma once
#include <Modloader/app/structs/FullConditionalExpressionWithType.h>
#include <Modloader/app/structs/FullConditionalExpressionWithType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FullConditionalExpressionWithType {
        inline app::FullConditionalExpressionWithType__Class** type_info() {
            static app::FullConditionalExpressionWithType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FullConditionalExpressionWithType__Class**)(modloader::win::memory::resolve_rva(0x04719F68));
            }
            return cache;
        }
        inline app::FullConditionalExpressionWithType__Class* get_class() {
            return il2cpp::get_class<app::FullConditionalExpressionWithType__Class>(type_info(), "System.Linq.Expressions", "FullConditionalExpressionWithType");
        }
        inline app::FullConditionalExpressionWithType* create() {
            return il2cpp::create_object<app::FullConditionalExpressionWithType>(get_class());
        }
    } // namespace FullConditionalExpressionWithType
} // namespace app::classes::types
