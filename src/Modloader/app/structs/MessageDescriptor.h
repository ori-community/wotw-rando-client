#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED)
#include <Modloader/app/structs/EmotionType__Enum.h>
#if defined(IL2CPP_STRUCT_EmotionType__Enum_DEFINED)
#define IL2CPP_STRUCT_MessageDescriptor_DEFINED
struct String;
struct SoundProvider;
struct Event_1;
struct MessageDescriptor {
    struct String* Message;
    EmotionType__Enum Emotion;

    struct SoundProvider* Sound;
    struct Event_1* WWiseEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageDescriptor_FWDDECL)
#define IL2CPP_STRUCT_MessageDescriptor_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MessageDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_MessageDescriptor_FWDDECL)
#include <Modloader/app/structs/MessageDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
