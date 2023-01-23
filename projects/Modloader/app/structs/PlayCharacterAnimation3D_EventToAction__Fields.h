#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_DEFINED
struct String;
struct ActionMethod;
struct __declspec(align(8)) PlayCharacterAnimation3D_EventToAction__Fields {
    struct String* EventId;
    struct ActionMethod* Action;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D_EventToAction__Fields_FWDDECL)
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
