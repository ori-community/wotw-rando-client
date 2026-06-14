#pragma once
#include <Modloader/app/structs/QuoteInstruction.h>
#include <Modloader/app/structs/QuoteInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuoteInstruction {
        inline app::QuoteInstruction__Class** type_info() {
            static app::QuoteInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuoteInstruction__Class**)(modloader::win::memory::resolve_rva(0x04749FF0));
            }
            return cache;
        }
        inline app::QuoteInstruction__Class* get_class() {
            return il2cpp::get_class<app::QuoteInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "QuoteInstruction");
        }
        inline app::QuoteInstruction* create() {
            return il2cpp::create_object<app::QuoteInstruction>(get_class());
        }
    } // namespace QuoteInstruction
} // namespace app::classes::types
