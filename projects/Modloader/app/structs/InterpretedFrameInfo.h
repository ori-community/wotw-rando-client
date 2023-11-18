#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterpretedFrameInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterpretedFrameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpretedFrameInfo_DEFINED)
#define IL2CPP_STRUCT_InterpretedFrameInfo_DEFINED
struct String;
struct DebugInfo;
struct InterpretedFrameInfo {
    struct String* _methodName;
    struct DebugInfo* _debugInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_InterpretedFrameInfo_FWDDECL)
#define IL2CPP_STRUCT_InterpretedFrameInfo_FWDDECL
#include <Modloader/app/structs/DebugInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InterpretedFrameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpretedFrameInfo_DEFINED) && !defined(IL2CPP_STRUCT_InterpretedFrameInfo_FWDDECL)
#include <Modloader/app/structs/InterpretedFrameInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterpretedFrameInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
