#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateData_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_UberStateData_DEFINED
struct UberID;
struct String;
struct IUberState;
struct IUberStateUIWrapper;
struct UberStateData {
    struct UberID* Id;
    struct UberID* GroupId;
    int64_t Size;
    struct Color Color;
    struct Rect StateRect;
    struct String* Value;
    struct IUberState* UberState;
    struct IUberStateUIWrapper* UberStateWrapper;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateData_FWDDECL)
#define IL2CPP_STRUCT_UberStateData_FWDDECL
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/IUberStateUIWrapper.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>
#endif
#undef IL2CPP_STRUCT_UberStateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateData_DEFINED) && !defined(IL2CPP_STRUCT_UberStateData_FWDDECL)
#include <Modloader/app/structs/UberStateData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
