#pragma once

namespace SteveBase::SourceEngine::Define {
    enum class ButtonCode {
        Invalid = -1,
        None = 0,
        Zero,
        One,
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        A,
        B,
        C,
        D,
        E,
        F,
        G,
        H,
        I,
        J,
        K,
        L,
        M,
        N,
        O,
        P,
        Q,
        R,
        S,
        T,
        U,
        V,
        W,
        X,
        Y,
        Z,
        Pad0,
        Pad1,
        Pad2,
        Pad3,
        Pad4,
        Pad5,
        Pad6,
        Pad7,
        Pad8,
        Pad9,
        PadDivide,
        PadMultiply,
        PadMinus,
        PadPlus,
        PadEnter,
        PadDecimal,
        LeftBracket,
        RightBracket,
        Semicolon,
        Apostrophe,
        BackQuote,

        SingleQuote = Apostrophe,
        BackTick = BackQuote,

        Comma,
        Period,
        Slash,
        BackSlash,
        Minus,
        Equal,
        Enter,
        Space,
        BackSpace,
        Tab,
        CapsLock,
        NumLock,
        Escape,
        ScrollLock,
        Insert,
        Delete,
        Home,
        End,
        PageUp,
        PageDown,
        Break,
        LeftShift,
        RightShift,
        LeftAlt,
        RightAlt,
        LeftControl,
        RightControl,
        LeftWinKey,
        RightWinKey,
        App,
        Up,
        Left,
        Down,
        Right,
        F1,
        F2,
        F3,
        F4,
        F5,
        F6,
        F7,
        F8,
        F9,
        F10,
        F11,
        F12,
        CapsLockToggle,
        NumLockToggle,
        ScrollLockToggle,

        LastKey = ScrollLockToggle,

        // Mouse
        MouseFirst = LastKey + 1,

        MouseLeft = MouseFirst,
        MouseRight,
        MouseMiddle,
        Mouse4,
        Mouse5,
        MouseWheelUp,		// A fake button which is 'pressed' and 'released' when the wheel is moved up 
        MouseWheelDown,	// A fake button which is 'pressed' and 'released' when the wheel is moved down

        MouseLast = MouseWheelDown,
        MouseCount = MouseLast - MouseFirst + 1,
    };
}