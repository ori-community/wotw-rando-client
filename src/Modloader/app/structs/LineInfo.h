#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineInfo_DEFINED)
#define IL2CPP_STRUCT_LineInfo_DEFINED
struct LineInfo {
    int32_t lineNo;
    int32_t linePos;
};
#endif
#if !defined(IL2CPP_STRUCT_LineInfo_FWDDECL)
#define IL2CPP_STRUCT_LineInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_LineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineInfo_DEFINED) && !defined(IL2CPP_STRUCT_LineInfo_FWDDECL)
#include <Modloader/app/structs/LineInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
