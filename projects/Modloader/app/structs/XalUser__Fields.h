#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalUser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalUser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser__Fields_DEFINED)
#define IL2CPP_STRUCT_XalUser__Fields_DEFINED
struct XalUser_1;
struct Action;
struct String;
struct Texture2D;
struct __declspec(align(8)) XalUser__Fields {
    struct XalUser_1* m_xalUser;
    struct Action* m_onSignOut;
    bool m_doneImageLoading;
    struct String* m_cachedGamerTag;
    struct Texture2D* _Image_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XalUser__Fields_FWDDECL)
#define IL2CPP_STRUCT_XalUser__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/XalUser_1.h>
#endif
#undef IL2CPP_STRUCT_XalUser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XalUser__Fields_FWDDECL)
#include <Modloader/app/structs/XalUser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalUser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
