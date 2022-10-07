#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieTokenizer_RecognizedAttribute {
        namespace {
            app::CookieTokenizer_RecognizedAttribute__Class* type_info_ref = nullptr;
        }
        app::CookieTokenizer_RecognizedAttribute__Class** type_info = &type_info_ref;
        inline app::CookieTokenizer_RecognizedAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieTokenizer_RecognizedAttribute__Class>(type_info, "System.Net", "CookieTokenizer", "RecognizedAttribute");
        }
        inline app::CookieTokenizer_RecognizedAttribute* create() {
            return il2cpp::create_object<app::CookieTokenizer_RecognizedAttribute>(get_class());
        }
        inline app::CookieTokenizer_RecognizedAttribute__Boxed* box(app::CookieTokenizer_RecognizedAttribute value) {
            return il2cpp::box_value<app::CookieTokenizer_RecognizedAttribute__Boxed>(get_class(), value);
        }
        inline app::CookieTokenizer_RecognizedAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::CookieTokenizer_RecognizedAttribute__Array>(get_class(), size);
        }
        inline app::CookieTokenizer_RecognizedAttribute__Array* create_array(const std::vector<app::CookieTokenizer_RecognizedAttribute>& items) {
            return il2cpp::array_new<app::CookieTokenizer_RecognizedAttribute__Array>(get_class(), items);
        }
    } // namespace CookieTokenizer_RecognizedAttribute
} // namespace app::classes::types
