#include <utils/messaging.h>
#include <Il2CppModLoader\il2cpp_helpers.h>

namespace utils
{
    app::MessageProvider* create_message_provider(app::String* message)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        // TODO: Add input provider and message provider with different color.

        auto item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
        item->fields.English = message;
        item->fields.French = message;
        item->fields.Italian = message;
        item->fields.German = message;
        item->fields.Spanish = message;
        item->fields.Japanese = message;
        item->fields.Portuguese = message;
        item->fields.Chinese = message;
        item->fields.Russian = message;
        item->fields.TraditionalChinese = message;
        item->fields.Czech = message;
        item->fields.Danish = message;
        item->fields.Dutch = message;
        item->fields.Finnish = message;
        item->fields.Hungarian = message;
        item->fields.Korean = message;
        item->fields.Norwegian = message;
        item->fields.Polish = message;
        item->fields.SpanishSpain = message;
        item->fields.Swedish = message;
        item->fields.Turkish = message;

        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }
}
