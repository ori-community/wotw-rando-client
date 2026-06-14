#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundLog__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundLog__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundLog__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SoundLog__StaticFields_DEFINED
struct Queue_1_System_String_;
struct List_1_System_String_;
struct String;
struct SoundLog__StaticFields {
    struct Queue_1_System_String_* recentSoundCalls;
    struct List_1_System_String_* m_filters;
    struct String* m_currentText;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundLog__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SoundLog__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Queue_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SoundLog__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundLog__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SoundLog__StaticFields_FWDDECL)
#include <Modloader/app/structs/SoundLog__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundLog__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
