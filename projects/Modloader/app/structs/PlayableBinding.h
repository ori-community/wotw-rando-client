#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBinding_DEFINED)
#define IL2CPP_STRUCT_PlayableBinding_DEFINED
struct String;
struct Object_1;
struct Type;
struct PlayableBinding_CreateOutputMethod;
struct PlayableBinding {
    struct String* m_StreamName;
    struct Object_1* m_SourceObject;
    struct Type* m_SourceBindingType;
    struct PlayableBinding_CreateOutputMethod* m_CreateOutputMethod;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayableBinding_FWDDECL)
#define IL2CPP_STRUCT_PlayableBinding_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/PlayableBinding_CreateOutputMethod.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_PlayableBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBinding_DEFINED) && !defined(IL2CPP_STRUCT_PlayableBinding_FWDDECL)
#include <Modloader/app/structs/PlayableBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
