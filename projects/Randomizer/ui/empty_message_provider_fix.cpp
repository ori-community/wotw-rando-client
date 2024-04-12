#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/Moon/UI/Text.h>
#include <Modloader/app/methods/TranslatedMessageProvider_MessageItem.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <optional>

namespace {
    using namespace app::classes;

    app::String* get_string_for_language(app::TranslatedMessageProvider_MessageItem* message_item, app::Language__Enum language) {
        switch (language) {
            case app::Language__Enum::French:
                return message_item->fields.French;
            case app::Language__Enum::Italian:
                return message_item->fields.Italian;
            case app::Language__Enum::German:
                return message_item->fields.German;
            case app::Language__Enum::Spanish:
                return message_item->fields.Spanish;
            case app::Language__Enum::Japanese:
                return message_item->fields.Japanese;
            case app::Language__Enum::Portuguese:
                return message_item->fields.Portuguese;
            case app::Language__Enum::Chinese:
                return message_item->fields.Chinese;
            case app::Language__Enum::Russian:
                return message_item->fields.Russian;
            case app::Language__Enum::TraditionalChinese:
                return message_item->fields.TraditionalChinese;
            case app::Language__Enum::Czech:
                return message_item->fields.Czech;
            case app::Language__Enum::Danish:
                return message_item->fields.Danish;
            case app::Language__Enum::Dutch:
                return message_item->fields.Dutch;
            case app::Language__Enum::Finnish:
                return message_item->fields.Finnish;
            case app::Language__Enum::Hungarian:
                return message_item->fields.Hungarian;
            case app::Language__Enum::Korean:
                return message_item->fields.Korean;
            case app::Language__Enum::Norwegian:
                return message_item->fields.Norwegian;
            case app::Language__Enum::Polish:
                return message_item->fields.Polish;
            case app::Language__Enum::SpanishSpain:
                return message_item->fields.SpanishSpain;
            case app::Language__Enum::Swedish:
                return message_item->fields.Swedish;
            case app::Language__Enum::Turkish:
                return message_item->fields.Turkish;
            case app::Language__Enum::English:
            default:
                return message_item->fields.English;
        }
    }

    IL2CPP_INTERCEPT(TranslatedMessageProvider_MessageItem, app::MessageDescriptor, GetDescriptor, (app::TranslatedMessageProvider_MessageItem * this_ptr, app::Language__Enum language)) {
        return {
            get_string_for_language(this_ptr, language),
            this_ptr->fields.Emotion,
            this_ptr->fields.Sound,
            this_ptr->fields.WWiseEvent,
        };
    }
}
