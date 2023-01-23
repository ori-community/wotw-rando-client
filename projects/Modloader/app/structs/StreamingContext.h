#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamingContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#include <Modloader/app/structs/StreamingContextStates__Enum.h>
#if defined(IL2CPP_STRUCT_StreamingContextStates__Enum_DEFINED)
#define IL2CPP_STRUCT_StreamingContext_DEFINED
struct Object;
struct StreamingContext {
    struct Object* m_additionalContext;
    StreamingContextStates__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamingContext_FWDDECL)
#define IL2CPP_STRUCT_StreamingContext_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_StreamingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingContext_DEFINED) && !defined(IL2CPP_STRUCT_StreamingContext_FWDDECL)
#include <Modloader/app/structs/StreamingContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamingContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
