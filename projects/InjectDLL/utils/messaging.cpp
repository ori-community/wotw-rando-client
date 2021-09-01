#include <utils/messaging.h>
#include <Il2CppModLoader\il2cpp_helpers.h>

namespace utils
{
    app::MessageProvider* create_message_provider(Il2CppString* message)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        // TODO: Add input provider and message provider with different color.

        auto item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
        item->fields.English = reinterpret_cast<app::String*>(message);
        item->fields.French = reinterpret_cast<app::String*>(message);
        item->fields.Italian = reinterpret_cast<app::String*>(message);
        item->fields.German = reinterpret_cast<app::String*>(message);
        item->fields.Spanish = reinterpret_cast<app::String*>(message);
        item->fields.Japanese = reinterpret_cast<app::String*>(message);
        item->fields.Portuguese = reinterpret_cast<app::String*>(message);
        item->fields.Chinese = reinterpret_cast<app::String*>(message);
        item->fields.Russian = reinterpret_cast<app::String*>(message);
        item->fields.TraditionalChinese = reinterpret_cast<app::String*>(message);
        item->fields.Czech = reinterpret_cast<app::String*>(message);
        item->fields.Danish = reinterpret_cast<app::String*>(message);
        item->fields.Dutch = reinterpret_cast<app::String*>(message);
        item->fields.Finnish = reinterpret_cast<app::String*>(message);
        item->fields.Hungarian = reinterpret_cast<app::String*>(message);
        item->fields.Korean = reinterpret_cast<app::String*>(message);
        item->fields.Norwegian = reinterpret_cast<app::String*>(message);
        item->fields.Polish = reinterpret_cast<app::String*>(message);
        item->fields.SpanishSpain = reinterpret_cast<app::String*>(message);
        item->fields.Swedish = reinterpret_cast<app::String*>(message);
        item->fields.Turkish = reinterpret_cast<app::String*>(message);

        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }
}
